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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTCUSTOMTEMPLATESREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTCUSTOMTEMPLATESREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListCustomTemplatesRequest : public RpcServiceRequest {
public:
	ListCustomTemplatesRequest();
	~ListCustomTemplatesRequest();
	long getResourceRealOwnerId() const;
	void setResourceRealOwnerId(long resourceRealOwnerId);
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSubtype() const;
	void setSubtype(const std::string &subtype);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceRealOwnerId_;
	std::string type_;
	int pageNumber_;
	std::string subtype_;
	int pageSize_;
	std::string orderBy_;
	std::string templateId_;
	std::string appId_;
	std::string name_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTCUSTOMTEMPLATESREQUEST_H_
