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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCSNAPSHOTSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCSNAPSHOTSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCSnapshotsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeRCSnapshotsRequest();
	~DescribeRCSnapshotsRequest();
	std::string getSnapshotIds() const;
	void setSnapshotIds(const std::string &snapshotIds);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);

private:
	std::string snapshotIds_;
	long pageNumber_;
	std::string regionId_;
	long pageSize_;
	std::string diskId_;
	std::vector<Tag> tag_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCSNAPSHOTSREQUEST_H_
