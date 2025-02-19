/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct red;
struct green;
struct blue;
struct alpha;
struct color;
struct licensePlate;
struct description;
struct name;
struct hasAC;
struct id;
struct name;
struct age;
struct address;
struct favoriteColor;
struct friends;
struct bestFriend;
struct petNames;
struct afraidOfAnimal;
struct vehicles;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_red
#define APACHE_THRIFT_ACCESSOR_red
APACHE_THRIFT_DEFINE_ACCESSOR(red);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_green
#define APACHE_THRIFT_ACCESSOR_green
APACHE_THRIFT_DEFINE_ACCESSOR(green);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_blue
#define APACHE_THRIFT_ACCESSOR_blue
APACHE_THRIFT_DEFINE_ACCESSOR(blue);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_alpha
#define APACHE_THRIFT_ACCESSOR_alpha
APACHE_THRIFT_DEFINE_ACCESSOR(alpha);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_color
#define APACHE_THRIFT_ACCESSOR_color
APACHE_THRIFT_DEFINE_ACCESSOR(color);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_licensePlate
#define APACHE_THRIFT_ACCESSOR_licensePlate
APACHE_THRIFT_DEFINE_ACCESSOR(licensePlate);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_description
#define APACHE_THRIFT_ACCESSOR_description
APACHE_THRIFT_DEFINE_ACCESSOR(description);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_hasAC
#define APACHE_THRIFT_ACCESSOR_hasAC
APACHE_THRIFT_DEFINE_ACCESSOR(hasAC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_id
#define APACHE_THRIFT_ACCESSOR_id
APACHE_THRIFT_DEFINE_ACCESSOR(id);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_age
#define APACHE_THRIFT_ACCESSOR_age
APACHE_THRIFT_DEFINE_ACCESSOR(age);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_address
#define APACHE_THRIFT_ACCESSOR_address
APACHE_THRIFT_DEFINE_ACCESSOR(address);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_favoriteColor
#define APACHE_THRIFT_ACCESSOR_favoriteColor
APACHE_THRIFT_DEFINE_ACCESSOR(favoriteColor);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_friends
#define APACHE_THRIFT_ACCESSOR_friends
APACHE_THRIFT_DEFINE_ACCESSOR(friends);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_bestFriend
#define APACHE_THRIFT_ACCESSOR_bestFriend
APACHE_THRIFT_DEFINE_ACCESSOR(bestFriend);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_petNames
#define APACHE_THRIFT_ACCESSOR_petNames
APACHE_THRIFT_DEFINE_ACCESSOR(petNames);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_afraidOfAnimal
#define APACHE_THRIFT_ACCESSOR_afraidOfAnimal
APACHE_THRIFT_DEFINE_ACCESSOR(afraidOfAnimal);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_vehicles
#define APACHE_THRIFT_ACCESSOR_vehicles
APACHE_THRIFT_DEFINE_ACCESSOR(vehicles);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class Animal {
  DOG = 1,
  CAT = 2,
  TARANTULA = 3,
};




} // cpp2

namespace std {
template<> struct hash<::cpp2::Animal> :
  ::apache::thrift::detail::enum_hash<::cpp2::Animal> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::Animal>;

template <> struct TEnumTraits<::cpp2::Animal> {
  using type = ::cpp2::Animal;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::DOG; }
  static constexpr type max() { return type::TARANTULA; }
};


}} // apache::thrift

namespace cpp2 {

using _Animal_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Animal>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _Animal_EnumMapFactory::ValuesToNamesMapType _Animal_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _Animal_EnumMapFactory::NamesToValuesMapType _Animal_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Color;
class Vehicle;
class Person;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef ::std::int64_t PersonID;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Color final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Color;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Color() :
      red(0),
      green(0),
      blue(0),
      alpha(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Color(apache::thrift::FragileConstructor, double red__arg, double green__arg, double blue__arg, double alpha__arg);

  Color(Color&&) = default;

  Color(const Color&) = default;


  Color& operator=(Color&&) = default;

  Color& operator=(const Color&) = default;
  void __clear();
 private:
  double red;
 private:
  double green;
 private:
  double blue;
 private:
  double alpha;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool red;
    bool green;
    bool blue;
    bool alpha;
  } __isset = {};

  bool operator==(const Color&) const;
  bool operator<(const Color&) const;

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> red_ref() const& {
    return {this->red, __isset.red};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> red_ref() const&& {
    return {std::move(this->red), __isset.red};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> red_ref() & {
    return {this->red, __isset.red};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> red_ref() && {
    return {std::move(this->red), __isset.red};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> green_ref() const& {
    return {this->green, __isset.green};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> green_ref() const&& {
    return {std::move(this->green), __isset.green};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> green_ref() & {
    return {this->green, __isset.green};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> green_ref() && {
    return {std::move(this->green), __isset.green};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> blue_ref() const& {
    return {this->blue, __isset.blue};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> blue_ref() const&& {
    return {std::move(this->blue), __isset.blue};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> blue_ref() & {
    return {this->blue, __isset.blue};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> blue_ref() && {
    return {std::move(this->blue), __isset.blue};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> alpha_ref() const& {
    return {this->alpha, __isset.alpha};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> alpha_ref() const&& {
    return {std::move(this->alpha), __isset.alpha};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> alpha_ref() & {
    return {this->alpha, __isset.alpha};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> alpha_ref() && {
    return {std::move(this->alpha), __isset.alpha};
  }

  double get_red() const {
    return red;
  }

  double& set_red(double red_) {
    red = red_;
    __isset.red = true;
    return red;
  }

  double get_green() const {
    return green;
  }

  double& set_green(double green_) {
    green = green_;
    __isset.green = true;
    return green;
  }

  double get_blue() const {
    return blue;
  }

  double& set_blue(double blue_) {
    blue = blue_;
    __isset.blue = true;
    return blue;
  }

  double get_alpha() const {
    return alpha;
  }

  double& set_alpha(double alpha_) {
    alpha = alpha_;
    __isset.alpha = true;
    return alpha;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Color>;
  friend void swap(Color& a, Color& b);
};

template <class Protocol_>
uint32_t Color::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Vehicle final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Vehicle;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Vehicle();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Vehicle(apache::thrift::FragileConstructor, ::cpp2::Color color__arg, ::std::string licensePlate__arg, ::std::string description__arg, ::std::string name__arg, bool hasAC__arg);

  Vehicle(Vehicle&&) noexcept;

  Vehicle(const Vehicle&) = default;


  Vehicle& operator=(Vehicle&&) = default;

  Vehicle& operator=(const Vehicle&) = default;
  void __clear();

  ~Vehicle();

 private:
  ::cpp2::Color color;
 private:
  ::std::string licensePlate;
 private:
  ::std::string description;
 private:
  ::std::string name;
 private:
  bool hasAC;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool color;
    bool licensePlate;
    bool description;
    bool name;
    bool hasAC;
  } __isset = {};

  bool operator==(const Vehicle&) const;
  bool operator<(const Vehicle&) const;

  template <typename..., typename T = ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> color_ref() const& {
    return {this->color, __isset.color};
  }

  template <typename..., typename T = ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> color_ref() const&& {
    return {std::move(this->color), __isset.color};
  }

  template <typename..., typename T = ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> color_ref() & {
    return {this->color, __isset.color};
  }

  template <typename..., typename T = ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> color_ref() && {
    return {std::move(this->color), __isset.color};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> licensePlate_ref() const& {
    return {this->licensePlate, __isset.licensePlate};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> licensePlate_ref() const&& {
    return {std::move(this->licensePlate), __isset.licensePlate};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> licensePlate_ref() & {
    return {this->licensePlate, __isset.licensePlate};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> licensePlate_ref() && {
    return {std::move(this->licensePlate), __isset.licensePlate};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> description_ref() const& {
    return {this->description, __isset.description};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> description_ref() const&& {
    return {std::move(this->description), __isset.description};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> description_ref() & {
    return {this->description, __isset.description};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> description_ref() && {
    return {std::move(this->description), __isset.description};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> name_ref() const& {
    return {this->name, __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> name_ref() const&& {
    return {std::move(this->name), __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> name_ref() & {
    return {this->name, __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> name_ref() && {
    return {std::move(this->name), __isset.name};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> hasAC_ref() const& {
    return {this->hasAC, __isset.hasAC};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> hasAC_ref() const&& {
    return {std::move(this->hasAC), __isset.hasAC};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> hasAC_ref() & {
    return {this->hasAC, __isset.hasAC};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> hasAC_ref() && {
    return {std::move(this->hasAC), __isset.hasAC};
  }
  const ::cpp2::Color& get_color() const&;
  ::cpp2::Color get_color() &&;

  template <typename T_Vehicle_color_struct_setter = ::cpp2::Color>
  ::cpp2::Color& set_color(T_Vehicle_color_struct_setter&& color_) {
    color = std::forward<T_Vehicle_color_struct_setter>(color_);
    __isset.color = true;
    return color;
  }

  const ::std::string* get_licensePlate() const& {
    return licensePlate_ref() ? std::addressof(licensePlate) : nullptr;
  }

  ::std::string* get_licensePlate() & {
    return licensePlate_ref() ? std::addressof(licensePlate) : nullptr;
  }
  ::std::string* get_licensePlate() && = delete;

  template <typename T_Vehicle_licensePlate_struct_setter = ::std::string>
  ::std::string& set_licensePlate(T_Vehicle_licensePlate_struct_setter&& licensePlate_) {
    licensePlate = std::forward<T_Vehicle_licensePlate_struct_setter>(licensePlate_);
    __isset.licensePlate = true;
    return licensePlate;
  }

  const ::std::string* get_description() const& {
    return description_ref() ? std::addressof(description) : nullptr;
  }

  ::std::string* get_description() & {
    return description_ref() ? std::addressof(description) : nullptr;
  }
  ::std::string* get_description() && = delete;

  template <typename T_Vehicle_description_struct_setter = ::std::string>
  ::std::string& set_description(T_Vehicle_description_struct_setter&& description_) {
    description = std::forward<T_Vehicle_description_struct_setter>(description_);
    __isset.description = true;
    return description;
  }

  const ::std::string* get_name() const& {
    return name_ref() ? std::addressof(name) : nullptr;
  }

  ::std::string* get_name() & {
    return name_ref() ? std::addressof(name) : nullptr;
  }
  ::std::string* get_name() && = delete;

  template <typename T_Vehicle_name_struct_setter = ::std::string>
  ::std::string& set_name(T_Vehicle_name_struct_setter&& name_) {
    name = std::forward<T_Vehicle_name_struct_setter>(name_);
    __isset.name = true;
    return name;
  }

  const bool* get_hasAC() const& {
    return hasAC_ref() ? std::addressof(hasAC) : nullptr;
  }

  bool* get_hasAC() & {
    return hasAC_ref() ? std::addressof(hasAC) : nullptr;
  }
  bool* get_hasAC() && = delete;

  bool& set_hasAC(bool hasAC_) {
    hasAC = hasAC_;
    __isset.hasAC = true;
    return hasAC;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Vehicle>;
  friend void swap(Vehicle& a, Vehicle& b);
};

template <class Protocol_>
uint32_t Vehicle::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Person final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Person;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Person();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Person(apache::thrift::FragileConstructor, ::cpp2::PersonID id__arg, ::std::string name__arg, ::std::int16_t age__arg, ::std::string address__arg, ::cpp2::Color favoriteColor__arg, ::std::set<::cpp2::PersonID> friends__arg, ::cpp2::PersonID bestFriend__arg, ::std::map<::cpp2::Animal, ::std::string> petNames__arg, ::cpp2::Animal afraidOfAnimal__arg, ::std::vector<::cpp2::Vehicle> vehicles__arg);

  Person(Person&&) noexcept;

  Person(const Person&) = default;


  Person& operator=(Person&&) = default;

  Person& operator=(const Person&) = default;
  void __clear();

  ~Person();

 private:
  ::cpp2::PersonID id;
 private:
  ::std::string name;
 private:
  ::std::int16_t age;
 private:
  ::std::string address;
 private:
  ::cpp2::Color favoriteColor;
 private:
  ::std::set<::cpp2::PersonID> friends;
 private:
  ::cpp2::PersonID bestFriend;
 private:
  ::std::map<::cpp2::Animal, ::std::string> petNames;
 private:
  ::cpp2::Animal afraidOfAnimal;
 private:
  ::std::vector<::cpp2::Vehicle> vehicles;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool id;
    bool name;
    bool age;
    bool address;
    bool favoriteColor;
    bool friends;
    bool bestFriend;
    bool petNames;
    bool afraidOfAnimal;
    bool vehicles;
  } __isset = {};

  bool operator==(const Person&) const;
  bool operator<(const Person&) const;

  template <typename..., typename T = ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id_ref() const& {
    return {this->id, __isset.id};
  }

  template <typename..., typename T = ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id_ref() const&& {
    return {std::move(this->id), __isset.id};
  }

  template <typename..., typename T = ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id_ref() & {
    return {this->id, __isset.id};
  }

  template <typename..., typename T = ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id_ref() && {
    return {std::move(this->id), __isset.id};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> name_ref() const& {
    return {this->name, __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> name_ref() const&& {
    return {std::move(this->name), __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> name_ref() & {
    return {this->name, __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> name_ref() && {
    return {std::move(this->name), __isset.name};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> age_ref() const& {
    return {this->age, __isset.age};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> age_ref() const&& {
    return {std::move(this->age), __isset.age};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> age_ref() & {
    return {this->age, __isset.age};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> age_ref() && {
    return {std::move(this->age), __isset.age};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> address_ref() const& {
    return {this->address, __isset.address};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> address_ref() const&& {
    return {std::move(this->address), __isset.address};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> address_ref() & {
    return {this->address, __isset.address};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> address_ref() && {
    return {std::move(this->address), __isset.address};
  }

  template <typename..., typename T = ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> favoriteColor_ref() const& {
    return {this->favoriteColor, __isset.favoriteColor};
  }

  template <typename..., typename T = ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> favoriteColor_ref() const&& {
    return {std::move(this->favoriteColor), __isset.favoriteColor};
  }

  template <typename..., typename T = ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> favoriteColor_ref() & {
    return {this->favoriteColor, __isset.favoriteColor};
  }

  template <typename..., typename T = ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> favoriteColor_ref() && {
    return {std::move(this->favoriteColor), __isset.favoriteColor};
  }

  template <typename..., typename T = ::std::set<::cpp2::PersonID>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> friends_ref() const& {
    return {this->friends, __isset.friends};
  }

  template <typename..., typename T = ::std::set<::cpp2::PersonID>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> friends_ref() const&& {
    return {std::move(this->friends), __isset.friends};
  }

  template <typename..., typename T = ::std::set<::cpp2::PersonID>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> friends_ref() & {
    return {this->friends, __isset.friends};
  }

  template <typename..., typename T = ::std::set<::cpp2::PersonID>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> friends_ref() && {
    return {std::move(this->friends), __isset.friends};
  }

  template <typename..., typename T = ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> bestFriend_ref() const& {
    return {this->bestFriend, __isset.bestFriend};
  }

  template <typename..., typename T = ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> bestFriend_ref() const&& {
    return {std::move(this->bestFriend), __isset.bestFriend};
  }

  template <typename..., typename T = ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> bestFriend_ref() & {
    return {this->bestFriend, __isset.bestFriend};
  }

  template <typename..., typename T = ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> bestFriend_ref() && {
    return {std::move(this->bestFriend), __isset.bestFriend};
  }

  template <typename..., typename T = ::std::map<::cpp2::Animal, ::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> petNames_ref() const& {
    return {this->petNames, __isset.petNames};
  }

  template <typename..., typename T = ::std::map<::cpp2::Animal, ::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> petNames_ref() const&& {
    return {std::move(this->petNames), __isset.petNames};
  }

  template <typename..., typename T = ::std::map<::cpp2::Animal, ::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> petNames_ref() & {
    return {this->petNames, __isset.petNames};
  }

  template <typename..., typename T = ::std::map<::cpp2::Animal, ::std::string>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> petNames_ref() && {
    return {std::move(this->petNames), __isset.petNames};
  }

  template <typename..., typename T = ::cpp2::Animal>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> afraidOfAnimal_ref() const& {
    return {this->afraidOfAnimal, __isset.afraidOfAnimal};
  }

  template <typename..., typename T = ::cpp2::Animal>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> afraidOfAnimal_ref() const&& {
    return {std::move(this->afraidOfAnimal), __isset.afraidOfAnimal};
  }

  template <typename..., typename T = ::cpp2::Animal>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> afraidOfAnimal_ref() & {
    return {this->afraidOfAnimal, __isset.afraidOfAnimal};
  }

  template <typename..., typename T = ::cpp2::Animal>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> afraidOfAnimal_ref() && {
    return {std::move(this->afraidOfAnimal), __isset.afraidOfAnimal};
  }

  template <typename..., typename T = ::std::vector<::cpp2::Vehicle>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> vehicles_ref() const& {
    return {this->vehicles, __isset.vehicles};
  }

  template <typename..., typename T = ::std::vector<::cpp2::Vehicle>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> vehicles_ref() const&& {
    return {std::move(this->vehicles), __isset.vehicles};
  }

  template <typename..., typename T = ::std::vector<::cpp2::Vehicle>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> vehicles_ref() & {
    return {this->vehicles, __isset.vehicles};
  }

  template <typename..., typename T = ::std::vector<::cpp2::Vehicle>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> vehicles_ref() && {
    return {std::move(this->vehicles), __isset.vehicles};
  }

  ::cpp2::PersonID get_id() const {
    return id;
  }

  ::cpp2::PersonID& set_id(::cpp2::PersonID id_) {
    id = id_;
    __isset.id = true;
    return id;
  }

  const ::std::string& get_name() const& {
    return name;
  }

  ::std::string get_name() && {
    return std::move(name);
  }

  template <typename T_Person_name_struct_setter = ::std::string>
  ::std::string& set_name(T_Person_name_struct_setter&& name_) {
    name = std::forward<T_Person_name_struct_setter>(name_);
    __isset.name = true;
    return name;
  }

  const ::std::int16_t* get_age() const& {
    return age_ref() ? std::addressof(age) : nullptr;
  }

  ::std::int16_t* get_age() & {
    return age_ref() ? std::addressof(age) : nullptr;
  }
  ::std::int16_t* get_age() && = delete;

  ::std::int16_t& set_age(::std::int16_t age_) {
    age = age_;
    __isset.age = true;
    return age;
  }

  const ::std::string* get_address() const& {
    return address_ref() ? std::addressof(address) : nullptr;
  }

  ::std::string* get_address() & {
    return address_ref() ? std::addressof(address) : nullptr;
  }
  ::std::string* get_address() && = delete;

  template <typename T_Person_address_struct_setter = ::std::string>
  ::std::string& set_address(T_Person_address_struct_setter&& address_) {
    address = std::forward<T_Person_address_struct_setter>(address_);
    __isset.address = true;
    return address;
  }
  const ::cpp2::Color* get_favoriteColor() const&;
  ::cpp2::Color* get_favoriteColor() &;
  ::cpp2::Color* get_favoriteColor() && = delete;

  template <typename T_Person_favoriteColor_struct_setter = ::cpp2::Color>
  ::cpp2::Color& set_favoriteColor(T_Person_favoriteColor_struct_setter&& favoriteColor_) {
    favoriteColor = std::forward<T_Person_favoriteColor_struct_setter>(favoriteColor_);
    __isset.favoriteColor = true;
    return favoriteColor;
  }
  const ::std::set<::cpp2::PersonID>* get_friends() const&;
  ::std::set<::cpp2::PersonID>* get_friends() &;
  ::std::set<::cpp2::PersonID>* get_friends() && = delete;

  template <typename T_Person_friends_struct_setter = ::std::set<::cpp2::PersonID>>
  ::std::set<::cpp2::PersonID>& set_friends(T_Person_friends_struct_setter&& friends_) {
    friends = std::forward<T_Person_friends_struct_setter>(friends_);
    __isset.friends = true;
    return friends;
  }

  const ::cpp2::PersonID* get_bestFriend() const& {
    return bestFriend_ref() ? std::addressof(bestFriend) : nullptr;
  }

  ::cpp2::PersonID* get_bestFriend() & {
    return bestFriend_ref() ? std::addressof(bestFriend) : nullptr;
  }
  ::cpp2::PersonID* get_bestFriend() && = delete;

  ::cpp2::PersonID& set_bestFriend(::cpp2::PersonID bestFriend_) {
    bestFriend = bestFriend_;
    __isset.bestFriend = true;
    return bestFriend;
  }
  const ::std::map<::cpp2::Animal, ::std::string>* get_petNames() const&;
  ::std::map<::cpp2::Animal, ::std::string>* get_petNames() &;
  ::std::map<::cpp2::Animal, ::std::string>* get_petNames() && = delete;

  template <typename T_Person_petNames_struct_setter = ::std::map<::cpp2::Animal, ::std::string>>
  ::std::map<::cpp2::Animal, ::std::string>& set_petNames(T_Person_petNames_struct_setter&& petNames_) {
    petNames = std::forward<T_Person_petNames_struct_setter>(petNames_);
    __isset.petNames = true;
    return petNames;
  }

  const ::cpp2::Animal* get_afraidOfAnimal() const& {
    return afraidOfAnimal_ref() ? std::addressof(afraidOfAnimal) : nullptr;
  }

  ::cpp2::Animal* get_afraidOfAnimal() & {
    return afraidOfAnimal_ref() ? std::addressof(afraidOfAnimal) : nullptr;
  }
  ::cpp2::Animal* get_afraidOfAnimal() && = delete;

  ::cpp2::Animal& set_afraidOfAnimal(::cpp2::Animal afraidOfAnimal_) {
    afraidOfAnimal = afraidOfAnimal_;
    __isset.afraidOfAnimal = true;
    return afraidOfAnimal;
  }
  const ::std::vector<::cpp2::Vehicle>* get_vehicles() const&;
  ::std::vector<::cpp2::Vehicle>* get_vehicles() &;
  ::std::vector<::cpp2::Vehicle>* get_vehicles() && = delete;

  template <typename T_Person_vehicles_struct_setter = ::std::vector<::cpp2::Vehicle>>
  ::std::vector<::cpp2::Vehicle>& set_vehicles(T_Person_vehicles_struct_setter&& vehicles_) {
    vehicles = std::forward<T_Person_vehicles_struct_setter>(vehicles_);
    __isset.vehicles = true;
    return vehicles;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Person>;
  friend void swap(Person& a, Person& b);
};

template <class Protocol_>
uint32_t Person::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
THRIFT_IGNORE_ISSET_USE_WARNING_END
