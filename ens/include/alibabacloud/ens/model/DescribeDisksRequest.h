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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEDISKSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEDISKSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeDisksRequest : public RpcServiceRequest {
public:
	DescribeDisksRequest();
	~DescribeDisksRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getOrderByParams() const;
	void setOrderByParams(const std::string &orderByParams);
	std::string getDiskName() const;
	void setDiskName(const std::string &diskName);
	std::string getDiskChargeType() const;
	void setDiskChargeType(const std::string &diskChargeType);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getDiskIds() const;
	void setDiskIds(const std::string &diskIds);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	std::string getEnsRegionIds() const;
	void setEnsRegionIds(const std::string &ensRegionIds);
	std::string getDiskType() const;
	void setDiskType(const std::string &diskType);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	std::string type_;
	std::string orderByParams_;
	std::string diskName_;
	std::string diskChargeType_;
	std::string ensRegionId_;
	std::string instanceId_;
	std::string status_;
	std::string snapshotId_;
	std::string pageNumber_;
	std::string pageSize_;
	std::string diskIds_;
	std::string diskId_;
	std::string ensRegionIds_;
	std::string diskType_;
	std::string category_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEDISKSREQUEST_H_
