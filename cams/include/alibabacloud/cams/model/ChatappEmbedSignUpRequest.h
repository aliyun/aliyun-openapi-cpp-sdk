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

#ifndef ALIBABACLOUD_CAMS_MODEL_CHATAPPEMBEDSIGNUPREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_CHATAPPEMBEDSIGNUPREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT ChatappEmbedSignUpRequest : public RpcServiceRequest {
public:
	ChatappEmbedSignUpRequest();
	~ChatappEmbedSignUpRequest();
	std::string getInputToken() const;
	void setInputToken(const std::string &inputToken);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getApiCode() const;
	void setApiCode(const std::string &apiCode);

private:
	std::string inputToken_;
	std::string prodCode_;
	std::string apiCode_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_CHATAPPEMBEDSIGNUPREQUEST_H_
