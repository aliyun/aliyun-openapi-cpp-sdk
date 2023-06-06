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

#ifndef ALIBABACLOUD_SAS_MODEL_EXPORTVULREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_EXPORTVULREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ExportVulRequest : public RpcServiceRequest {
public:
	ExportVulRequest();
	~ExportVulRequest();
	int getMinScore() const;
	void setMinScore(int minScore);
	std::string getAttachTypes() const;
	void setAttachTypes(const std::string &attachTypes);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getVpcInstanceIds() const;
	void setVpcInstanceIds(const std::string &vpcInstanceIds);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	int getCheckType() const;
	void setCheckType(int checkType);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getModifyTsEnd() const;
	void setModifyTsEnd(long modifyTsEnd);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getResource() const;
	void setResource(const std::string &resource);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getAliasName() const;
	void setAliasName(const std::string &aliasName);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getNecessity() const;
	void setNecessity(const std::string &necessity);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);
	std::string getStatusList() const;
	void setStatusList(const std::string &statusList);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	long getModifyTsStart() const;
	void setModifyTsStart(long modifyTsStart);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getBatchName() const;
	void setBatchName(const std::string &batchName);
	std::string getSearchTags() const;
	void setSearchTags(const std::string &searchTags);

private:
	int minScore_;
	std::string attachTypes_;
	std::string type_;
	std::string vpcInstanceIds_;
	std::string containerFieldName_;
	int checkType_;
	std::string sourceIp_;
	long modifyTsEnd_;
	std::string level_;
	std::string resource_;
	std::string groupId_;
	std::string aliasName_;
	std::string name_;
	std::string necessity_;
	std::string uuids_;
	std::string statusList_;
	std::string targetType_;
	std::string remark_;
	std::string containerFieldValue_;
	long modifyTsStart_;
	std::string lang_;
	std::string dealed_;
	std::string clusterId_;
	std::string batchName_;
	std::string searchTags_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_EXPORTVULREQUEST_H_
