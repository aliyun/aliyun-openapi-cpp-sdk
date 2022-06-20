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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEUUIDSBYVULNAMESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEUUIDSBYVULNAMESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeUuidsByVulNamesRequest : public RpcServiceRequest {
public:
	DescribeUuidsByVulNamesRequest();
	~DescribeUuidsByVulNamesRequest();
	std::string getStatusList() const;
	void setStatusList(const std::string &statusList);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getVpcInstanceIds() const;
	void setVpcInstanceIds(const std::string &vpcInstanceIds);
	std::vector<std::string> getVulNames() const;
	void setVulNames(const std::vector<std::string> &vulNames);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	long getGroupId() const;
	void setGroupId(long groupId);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	std::string getFieldValue() const;
	void setFieldValue(const std::string &fieldValue);
	std::string getFieldName() const;
	void setFieldName(const std::string &fieldName);
	std::string getSearchTags() const;
	void setSearchTags(const std::string &searchTags);
	std::string getNecessity() const;
	void setNecessity(const std::string &necessity);

private:
	std::string statusList_;
	std::string targetType_;
	std::string remark_;
	std::string type_;
	std::string vpcInstanceIds_;
	std::vector<std::string> vulNames_;
	std::string sourceIp_;
	std::string tag_;
	std::string lang_;
	std::string level_;
	long groupId_;
	std::string dealed_;
	std::string fieldValue_;
	std::string fieldName_;
	std::string searchTags_;
	std::string necessity_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEUUIDSBYVULNAMESREQUEST_H_
