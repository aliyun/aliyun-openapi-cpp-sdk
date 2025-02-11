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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_ID2METASTANDARDVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_ID2METASTANDARDVERIFYREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT Id2MetaStandardVerifyRequest : public RpcServiceRequest {
public:
	Id2MetaStandardVerifyRequest();
	~Id2MetaStandardVerifyRequest();
	std::string getParamType() const;
	void setParamType(const std::string &paramType);
	std::string getIdentifyNum() const;
	void setIdentifyNum(const std::string &identifyNum);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string paramType_;
	std::string identifyNum_;
	std::string userName_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_ID2METASTANDARDVERIFYREQUEST_H_
