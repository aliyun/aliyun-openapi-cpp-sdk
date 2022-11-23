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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEORDERREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEORDERREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT CreateOrderRequest : public RpcServiceRequest {
public:
	CreateOrderRequest();
	~CreateOrderRequest();
	long getTid() const;
	void setTid(long tid);
	std::string getPluginType() const;
	void setPluginType(const std::string &pluginType);
	std::map<std::string, std::string> getPluginParam() const;
	void setPluginParam(std::map<std::string, std::string> pluginParam);
	std::string getRelatedUserList() const;
	void setRelatedUserList(const std::string &relatedUserList);
	std::string getAttachmentKey() const;
	void setAttachmentKey(const std::string &attachmentKey);
	std::string getComment() const;
	void setComment(const std::string &comment);

private:
	long tid_;
	std::string pluginType_;
	std::map<std::string, std::string> pluginParam_;
	std::string relatedUserList_;
	std::string attachmentKey_;
	std::string comment_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEORDERREQUEST_H_
