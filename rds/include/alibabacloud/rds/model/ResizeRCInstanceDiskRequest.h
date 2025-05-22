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

#ifndef ALIBABACLOUD_RDS_MODEL_RESIZERCINSTANCEDISKREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_RESIZERCINSTANCEDISKREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ResizeRCInstanceDiskRequest : public RpcServiceRequest {
public:
	ResizeRCInstanceDiskRequest();
	~ResizeRCInstanceDiskRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	long getNewSize() const;
	void setNewSize(long newSize);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string type_;
	std::string regionId_;
	std::string diskId_;
	bool autoPay_;
	bool dryRun_;
	long newSize_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_RESIZERCINSTANCEDISKREQUEST_H_
