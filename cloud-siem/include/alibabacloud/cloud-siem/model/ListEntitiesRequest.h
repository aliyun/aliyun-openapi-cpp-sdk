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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTENTITIESREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTENTITIESREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT ListEntitiesRequest : public RpcServiceRequest {
public:
	ListEntitiesRequest();
	~ListEntitiesRequest();
	long getRoleFor() const;
	void setRoleFor(long roleFor);
	std::string getMalwareType() const;
	void setMalwareType(const std::string &malwareType);
	std::string getEntityName() const;
	void setEntityName(const std::string &entityName);
	std::string getAssetName() const;
	void setAssetName(const std::string &assetName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getRoleType() const;
	void setRoleType(int roleType);
	std::string getAssetUuid() const;
	void setAssetUuid(const std::string &assetUuid);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getIsMalwareEntity() const;
	void setIsMalwareEntity(const std::string &isMalwareEntity);
	std::string getEntityType() const;
	void setEntityType(const std::string &entityType);
	std::string getEntityUuid() const;
	void setEntityUuid(const std::string &entityUuid);
	std::string getIncidentUuid() const;
	void setIncidentUuid(const std::string &incidentUuid);
	std::string getIsAsset() const;
	void setIsAsset(const std::string &isAsset);

private:
	long roleFor_;
	std::string malwareType_;
	std::string entityName_;
	std::string assetName_;
	std::string regionId_;
	int pageSize_;
	int roleType_;
	std::string assetUuid_;
	int currentPage_;
	std::string isMalwareEntity_;
	std::string entityType_;
	std::string entityUuid_;
	std::string incidentUuid_;
	std::string isAsset_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTENTITIESREQUEST_H_
