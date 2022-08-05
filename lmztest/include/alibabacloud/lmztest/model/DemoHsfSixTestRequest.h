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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFSIXTESTREQUEST_H_
#define ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFSIXTESTREQUEST_H_

#include <alibabacloud/lmztest/LmzTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LmzTest {
namespace Model {
class ALIBABACLOUD_LMZTEST_EXPORT DemoHsfSixTestRequest : public RpcServiceRequest {
public:
	struct CodeMap {
		std::string name;
		std::string id;
	};
	DemoHsfSixTestRequest();
	~DemoHsfSixTestRequest();
	std::vector<std::map<std::string, std::map<std::string, ObjectOfAny>>> getStrListMap() const;
	void setStrListMap(const std::vector<std::map<std::string, std::map<std::string, ObjectOfAny>>> &strListMap);
	std::string getData() const;
	void setData(const std::string &data);
	std::string getMap() const;
	void setMap(const std::string &map);
	std::map<std::string, codeMap> getCodeMap() const;
	void setCodeMap(const std::map<std::string, codeMap> &codeMap);

private:
	std::vector<std::map<std::string, std::map<std::string, ObjectOfAny>>> strListMap_;
	std::string data_;
	std::string map_;
	std::map<std::string, codeMap> codeMap_;
};
} // namespace Model
} // namespace LmzTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFSIXTESTREQUEST_H_
