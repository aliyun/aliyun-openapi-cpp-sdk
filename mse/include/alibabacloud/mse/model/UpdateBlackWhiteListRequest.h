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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEBLACKWHITELISTREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEBLACKWHITELISTREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateBlackWhiteListRequest : public RpcServiceRequest {
public:
	UpdateBlackWhiteListRequest();
	~UpdateBlackWhiteListRequest();
	std::string getNote() const;
	void setNote(const std::string &note);
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getContent() const;
	void setContent(const std::string &content);
	bool getIsWhite() const;
	void setIsWhite(bool isWhite);
	std::string getResourceIdJsonList() const;
	void setResourceIdJsonList(const std::string &resourceIdJsonList);
	long getId() const;
	void setId(long id);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string note_;
	std::string mseSessionId_;
	std::string gatewayUniqueId_;
	std::string type_;
	std::string content_;
	bool isWhite_;
	std::string resourceIdJsonList_;
	long id_;
	std::string resourceType_;
	std::string name_;
	std::string acceptLanguage_;
	std::string status_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEBLACKWHITELISTREQUEST_H_
