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

#ifndef ALIBABACLOUD_RAM_MODEL_SETPASSWORDPOLICYREQUEST_H_
#define ALIBABACLOUD_RAM_MODEL_SETPASSWORDPOLICYREQUEST_H_

#include <alibabacloud/ram/RamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ram {
namespace Model {
class ALIBABACLOUD_RAM_EXPORT SetPasswordPolicyRequest : public RpcServiceRequest {
public:
	SetPasswordPolicyRequest();
	~SetPasswordPolicyRequest();
	int getPasswordReusePrevention() const;
	void setPasswordReusePrevention(int passwordReusePrevention);
	bool getRequireUppercaseCharacters() const;
	void setRequireUppercaseCharacters(bool requireUppercaseCharacters);
	int getMinimumPasswordLength() const;
	void setMinimumPasswordLength(int minimumPasswordLength);
	bool getRequireNumbers() const;
	void setRequireNumbers(bool requireNumbers);
	bool getRequireLowercaseCharacters() const;
	void setRequireLowercaseCharacters(bool requireLowercaseCharacters);
	int getMaxPasswordAge() const;
	void setMaxPasswordAge(int maxPasswordAge);
	int getMaxLoginAttemps() const;
	void setMaxLoginAttemps(int maxLoginAttemps);
	bool getHardExpiry() const;
	void setHardExpiry(bool hardExpiry);
	bool getRequireSymbols() const;
	void setRequireSymbols(bool requireSymbols);

private:
	int passwordReusePrevention_;
	bool requireUppercaseCharacters_;
	int minimumPasswordLength_;
	bool requireNumbers_;
	bool requireLowercaseCharacters_;
	int maxPasswordAge_;
	int maxLoginAttemps_;
	bool hardExpiry_;
	bool requireSymbols_;
};
} // namespace Model
} // namespace Ram
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RAM_MODEL_SETPASSWORDPOLICYREQUEST_H_
