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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GRANTTEMPLATEAUTHORITYREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GRANTTEMPLATEAUTHORITYREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GrantTemplateAuthorityRequest : public RpcServiceRequest {
public:
	GrantTemplateAuthorityRequest();
	~GrantTemplateAuthorityRequest();
	std::string getExpireDate() const;
	void setExpireDate(const std::string &expireDate);
	long getTid() const;
	void setTid(long tid);
	long getTemplateId() const;
	void setTemplateId(long templateId);
	std::string getUserIds() const;
	void setUserIds(const std::string &userIds);
	std::string getComment() const;
	void setComment(const std::string &comment);

private:
	std::string expireDate_;
	long tid_;
	long templateId_;
	std::string userIds_;
	std::string comment_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GRANTTEMPLATEAUTHORITYREQUEST_H_
