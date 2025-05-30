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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_SMARTQAUTHORIZEREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_SMARTQAUTHORIZEREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT SmartqAuthorizeRequest : public RpcServiceRequest {
public:
	SmartqAuthorizeRequest();
	~SmartqAuthorizeRequest();
	std::string getLlmCubeThemes() const;
	void setLlmCubeThemes(const std::string &llmCubeThemes);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getLlmCubes() const;
	void setLlmCubes(const std::string &llmCubes);
	std::string getCubeIds() const;
	void setCubeIds(const std::string &cubeIds);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	int getOperationType() const;
	void setOperationType(int operationType);
	std::string getExpireDay() const;
	void setExpireDay(const std::string &expireDay);
	std::string getUserIds() const;
	void setUserIds(const std::string &userIds);

private:
	std::string llmCubeThemes_;
	std::string accessPoint_;
	std::string llmCubes_;
	std::string cubeIds_;
	std::string signType_;
	int operationType_;
	std::string expireDay_;
	std::string userIds_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_SMARTQAUTHORIZEREQUEST_H_
