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

#ifndef ALIBABACLOUD_STS_MODEL_ASSUMEROLEWITHSAMLREQUEST_H_
#define ALIBABACLOUD_STS_MODEL_ASSUMEROLEWITHSAMLREQUEST_H_

#include <alibabacloud/sts/StsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sts {
namespace Model {
class ALIBABACLOUD_STS_EXPORT AssumeRoleWithSAMLRequest : public RpcServiceRequest {
public:
	AssumeRoleWithSAMLRequest();
	~AssumeRoleWithSAMLRequest();
	std::string getSAMLAssertion() const;
	void setSAMLAssertion(const std::string &sAMLAssertion);
	std::string getRoleArn() const;
	void setRoleArn(const std::string &roleArn);
	std::string getSAMLProviderArn() const;
	void setSAMLProviderArn(const std::string &sAMLProviderArn);
	long getDurationSeconds() const;
	void setDurationSeconds(long durationSeconds);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);

private:
	std::string sAMLAssertion_;
	std::string roleArn_;
	std::string sAMLProviderArn_;
	long durationSeconds_;
	std::string policy_;
};
} // namespace Model
} // namespace Sts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_STS_MODEL_ASSUMEROLEWITHSAMLREQUEST_H_
