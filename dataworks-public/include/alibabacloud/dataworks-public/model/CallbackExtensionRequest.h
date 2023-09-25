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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CALLBACKEXTENSIONREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CALLBACKEXTENSIONREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CallbackExtensionRequest : public RpcServiceRequest {
public:
	CallbackExtensionRequest();
	~CallbackExtensionRequest();
	std::string getCheckResult() const;
	void setCheckResult(const std::string &checkResult);
	std::string getMessageId() const;
	void setMessageId(const std::string &messageId);
	std::string getCheckMessage() const;
	void setCheckMessage(const std::string &checkMessage);
	std::string getExtensionCode() const;
	void setExtensionCode(const std::string &extensionCode);

private:
	std::string checkResult_;
	std::string messageId_;
	std::string checkMessage_;
	std::string extensionCode_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CALLBACKEXTENSIONREQUEST_H_
