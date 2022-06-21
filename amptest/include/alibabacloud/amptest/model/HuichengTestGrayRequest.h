/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_AMPTEST_MODEL_HUICHENGTESTGRAYREQUEST_H_
#define ALIBABACLOUD_AMPTEST_MODEL_HUICHENGTESTGRAYREQUEST_H_

#include <alibabacloud/amptest/AmpTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AmpTest {
namespace Model {
class ALIBABACLOUD_AMPTEST_EXPORT HuichengTestGrayRequest : public RpcServiceRequest {
public:
	struct Home {
		struct Address {
			struct T {
				std::string _class;
			};
			T t;
			struct Location {
				long late;
				long lon;
			};
			Location location;
			std::string detail;
		};
		Address address;
		struct T {
			std::string _class;
		};
		T t;
		std::string string;
		std::vector<std::string> phoneNumbers;
		struct DMapItem {
			struct Location {
				long late;
				long lon;
			};
			Location location;
			std::string detail;
		};
		DMapItem dMapItem;
		std::map<std::string, DMapItem> dMap;
		std::map<std::string, int> nameToAge;
		struct LocationsItem {
			long late;
			long lon;
		};
		LocationsItem locationsItem;
		std::vector<LocationsItem> locations;
	};
	HuichengTestGrayRequest();
	~HuichengTestGrayRequest();
	Home getHome() const;
	void setHome(const Home &home);

private:
	Home home_;
};
} // namespace Model
} // namespace AmpTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMPTEST_MODEL_HUICHENGTESTGRAYREQUEST_H_
