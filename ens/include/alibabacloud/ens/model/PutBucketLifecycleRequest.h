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

#ifndef ALIBABACLOUD_ENS_MODEL_PUTBUCKETLIFECYCLEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_PUTBUCKETLIFECYCLEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT PutBucketLifecycleRequest : public RpcServiceRequest {
public:
	PutBucketLifecycleRequest();
	~PutBucketLifecycleRequest();
	std::string getPrefix() const;
	void setPrefix(const std::string &prefix);
	std::string getAllowSameActionOverlap() const;
	void setAllowSameActionOverlap(const std::string &allowSameActionOverlap);
	long getExpirationDays() const;
	void setExpirationDays(long expirationDays);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getBucketName() const;
	void setBucketName(const std::string &bucketName);
	std::string getCreatedBeforeDate() const;
	void setCreatedBeforeDate(const std::string &createdBeforeDate);

private:
	std::string prefix_;
	std::string allowSameActionOverlap_;
	long expirationDays_;
	std::string ruleId_;
	std::string status_;
	std::string bucketName_;
	std::string createdBeforeDate_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_PUTBUCKETLIFECYCLEREQUEST_H_
