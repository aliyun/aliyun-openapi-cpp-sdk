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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeSnapshotsRequest : public RpcServiceRequest {
public:
	DescribeSnapshotsRequest();
	~DescribeSnapshotsRequest();
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string snapshotId_;
	int pageNumber_;
	std::string ensRegionId_;
	int pageSize_;
	std::string diskId_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
