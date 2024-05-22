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

#ifndef ALIBABACLOUD_ENS_MODEL_GETBUCKETLIFECYCLEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_GETBUCKETLIFECYCLEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT GetBucketLifecycleRequest : public RpcServiceRequest {
public:
	GetBucketLifecycleRequest();
	~GetBucketLifecycleRequest();
	std::string getBucketName() const;
	void setBucketName(const std::string &bucketName);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);

private:
	std::string bucketName_;
	std::string ruleId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_GETBUCKETLIFECYCLEREQUEST_H_
