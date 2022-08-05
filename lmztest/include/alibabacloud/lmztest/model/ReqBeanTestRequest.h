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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_REQBEANTESTREQUEST_H_
#define ALIBABACLOUD_LMZTEST_MODEL_REQBEANTESTREQUEST_H_

#include <alibabacloud/lmztest/LmzTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LmzTest {
namespace Model {
class ALIBABACLOUD_LMZTEST_EXPORT ReqBeanTestRequest : public RpcServiceRequest {
public:
	struct Users {
		std::string name;
		std::string id;
	};
	ReqBeanTestRequest();
	~ReqBeanTestRequest();
	std::vector<std::string> getCodes() const;
	void setCodes(const std::vector<std::string> &codes);
	std::string getXhostheadertest() const;
	void setXhostheadertest(const std::string &xhostheadertest);
	std::string getId() const;
	void setId(const std::string &id);
	std::vector<long> getNums() const;
	void setNums(const std::vector<long> &nums);
	std::vector<users> getUsers() const;
	void setUsers(const std::vector<users> &users);

private:
	std::vector<std::string> codes_;
	std::string xhostheadertest_;
	std::string id_;
	std::vector<long> nums_;
	std::vector<users> users_;
};
} // namespace Model
} // namespace LmzTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LMZTEST_MODEL_REQBEANTESTREQUEST_H_
