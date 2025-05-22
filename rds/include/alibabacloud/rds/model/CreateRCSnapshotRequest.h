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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATERCSNAPSHOTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATERCSNAPSHOTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateRCSnapshotRequest : public RpcServiceRequest {
public:
	CreateRCSnapshotRequest();
	~CreateRCSnapshotRequest();
	bool getInstantAccess() const;
	void setInstantAccess(bool instantAccess);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getInstantAccessRetentionDays() const;
	void setInstantAccessRetentionDays(int instantAccessRetentionDays);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getRetentionDays() const;
	void setRetentionDays(int retentionDays);

private:
	bool instantAccess_;
	std::string description_;
	int instantAccessRetentionDays_;
	std::string regionId_;
	std::string diskId_;
	std::string zoneId_;
	int retentionDays_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATERCSNAPSHOTREQUEST_H_
