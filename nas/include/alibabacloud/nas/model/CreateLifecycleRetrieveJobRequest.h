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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATELIFECYCLERETRIEVEJOBREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATELIFECYCLERETRIEVEJOBREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateLifecycleRetrieveJobRequest : public RpcServiceRequest {
public:
	CreateLifecycleRetrieveJobRequest();
	~CreateLifecycleRetrieveJobRequest();
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::vector<std::string> getPaths() const;
	void setPaths(const std::vector<std::string> &paths);

private:
	std::string storageType_;
	std::string fileSystemId_;
	std::vector<std::string> paths_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATELIFECYCLERETRIEVEJOBREQUEST_H_
