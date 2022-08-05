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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFNINERESPONSEREQUEST_H_
#define ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFNINERESPONSEREQUEST_H_

#include <alibabacloud/lmztest/LmzTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LmzTest {
namespace Model {
class ALIBABACLOUD_LMZTEST_EXPORT DemoHsfNineResponseRequest : public RpcServiceRequest {
public:
	struct UserMap {
		std::string uaa;
		std::string uas;
		std::string name;
		std::string id;
	};
	DemoHsfNineResponseRequest();
	~DemoHsfNineResponseRequest();
	std::string getName() const;
	void setName(const std::string &name);
	std::string getTestF1() const;
	void setTestF1(const std::string &testF1);
	std::map<std::string, userMap> getUserMap() const;
	void setUserMap(const std::map<std::string, userMap> &userMap);

private:
	std::string name_;
	std::string testF1_;
	std::map<std::string, userMap> userMap_;
};
} // namespace Model
} // namespace LmzTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFNINERESPONSEREQUEST_H_
