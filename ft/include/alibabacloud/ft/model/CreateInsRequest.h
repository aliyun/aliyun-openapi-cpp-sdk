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

#ifndef ALIBABACLOUD_FT_MODEL_CREATEINSREQUEST_H_
#define ALIBABACLOUD_FT_MODEL_CREATEINSREQUEST_H_

#include <alibabacloud/ft/FtExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ft {
namespace Model {
class ALIBABACLOUD_FT_EXPORT CreateInsRequest : public RpcServiceRequest {
public:
	CreateInsRequest();
	~CreateInsRequest();
	std::string getNewparam1() const;
	void setNewparam1(const std::string &newparam1);
	std::string getBind() const;
	void setBind(const std::string &bind);
	std::string getTest() const;
	void setTest(const std::string &test);
	std::string getSuccess() const;
	void setSuccess(const std::string &success);
	std::string getTime() const;
	void setTime(const std::string &time);
	std::string getNewPala() const;
	void setNewPala(const std::string &newPala);

private:
	std::string newparam1_;
	std::string bind_;
	std::string test_;
	std::string success_;
	std::string time_;
	std::string newPala_;
};
} // namespace Model
} // namespace Ft
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FT_MODEL_CREATEINSREQUEST_H_
