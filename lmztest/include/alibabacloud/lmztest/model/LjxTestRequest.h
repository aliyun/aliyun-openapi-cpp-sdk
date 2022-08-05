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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_LJXTESTREQUEST_H_
#define ALIBABACLOUD_LMZTEST_MODEL_LJXTESTREQUEST_H_

#include <alibabacloud/lmztest/LmzTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LmzTest {
namespace Model {
class ALIBABACLOUD_LMZTEST_EXPORT LjxTestRequest : public RpcServiceRequest {
public:
	LjxTestRequest();
	~LjxTestRequest();
	std::string getNewparam2() const;
	void setNewparam2(const std::string &newparam2);
	std::vector<std::string> getNewparam1() const;
	void setNewparam1(const std::vector<std::string> &newparam1);
	std::map<std::string, std::string> getCode() const;
	void setCode(const std::map<std::string, std::string> &code);
	std::string getId() const;
	void setId(const std::string &id);
	std::string getBody() const;
	void setBody(const std::string &body);

private:
	std::string newparam2_;
	std::vector<std::string> newparam1_;
	std::map<std::string, std::string> code_;
	std::string id_;
	std::string body_;
};
} // namespace Model
} // namespace LmzTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LMZTEST_MODEL_LJXTESTREQUEST_H_
