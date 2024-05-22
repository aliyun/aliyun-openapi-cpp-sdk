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

#ifndef ALIBABACLOUD_ENS_MODEL_COPYSNAPSHOTREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_COPYSNAPSHOTREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CopySnapshotRequest : public RpcServiceRequest {
public:
	CopySnapshotRequest();
	~CopySnapshotRequest();
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::vector<std::string> getDestinationRegionIds() const;
	void setDestinationRegionIds(const std::vector<std::string> &destinationRegionIds);
	std::string getDestinationSnapshotName() const;
	void setDestinationSnapshotName(const std::string &destinationSnapshotName);
	std::string getDestinationSnapshotDescription() const;
	void setDestinationSnapshotDescription(const std::string &destinationSnapshotDescription);

private:
	std::string snapshotId_;
	std::vector<std::string> destinationRegionIds_;
	std::string destinationSnapshotName_;
	std::string destinationSnapshotDescription_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_COPYSNAPSHOTREQUEST_H_
