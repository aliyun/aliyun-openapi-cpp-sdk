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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBESNAPSHOTSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeSnapshotsRequest : public RpcServiceRequest {
public:
	DescribeSnapshotsRequest();
	~DescribeSnapshotsRequest();
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::string getSnapshotName() const;
	void setSnapshotName(const std::string &snapshotName);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getDesktopId() const;
	void setDesktopId(const std::string &desktopId);
	std::string getDesktopName() const;
	void setDesktopName(const std::string &desktopName);
	std::string getCreator() const;
	void setCreator(const std::string &creator);
	std::string getSourceDiskType() const;
	void setSourceDiskType(const std::string &sourceDiskType);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getSnapshotType() const;
	void setSnapshotType(const std::string &snapshotType);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string snapshotId_;
	std::string snapshotName_;
	std::string startTime_;
	std::string regionId_;
	std::string nextToken_;
	std::string desktopId_;
	std::string desktopName_;
	std::string creator_;
	std::string sourceDiskType_;
	std::string endTime_;
	std::string snapshotType_;
	int maxResults_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
