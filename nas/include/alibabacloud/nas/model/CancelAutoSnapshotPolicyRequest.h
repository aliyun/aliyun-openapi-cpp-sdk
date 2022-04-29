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

#ifndef ALIBABACLOUD_NAS_MODEL_CANCELAUTOSNAPSHOTPOLICYREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CANCELAUTOSNAPSHOTPOLICYREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CancelAutoSnapshotPolicyRequest : public RpcServiceRequest {
public:
	CancelAutoSnapshotPolicyRequest();
	~CancelAutoSnapshotPolicyRequest();
	std::string getFileSystemIds() const;
	void setFileSystemIds(const std::string &fileSystemIds);

private:
	std::string fileSystemIds_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CANCELAUTOSNAPSHOTPOLICYREQUEST_H_
