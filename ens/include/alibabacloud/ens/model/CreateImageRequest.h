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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATEIMAGEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATEIMAGEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateImageRequest : public RpcServiceRequest {
public:
	CreateImageRequest();
	~CreateImageRequest();
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::string getDeleteAfterImageUpload() const;
	void setDeleteAfterImageUpload(const std::string &deleteAfterImageUpload);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	std::string getTargetOSSRegionId() const;
	void setTargetOSSRegionId(const std::string &targetOSSRegionId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string snapshotId_;
	std::string deleteAfterImageUpload_;
	std::string imageName_;
	std::string targetOSSRegionId_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATEIMAGEREQUEST_H_
