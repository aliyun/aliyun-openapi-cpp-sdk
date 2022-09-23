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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATEMOUNTTARGETREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATEMOUNTTARGETREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateMountTargetRequest : public RpcServiceRequest {
public:
	CreateMountTargetRequest();
	~CreateMountTargetRequest();
	std::string getMountTargetName() const;
	void setMountTargetName(const std::string &mountTargetName);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::string getNetWorkId() const;
	void setNetWorkId(const std::string &netWorkId);

private:
	std::string mountTargetName_;
	std::string ensRegionId_;
	std::string fileSystemId_;
	std::string netWorkId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATEMOUNTTARGETREQUEST_H_
