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

#ifndef ALIBABACLOUD_ECD_MODEL_VERIFYCENREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_VERIFYCENREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT VerifyCenRequest : public RpcServiceRequest {
public:
	VerifyCenRequest();
	~VerifyCenRequest();
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	long getCenOwnerId() const;
	void setCenOwnerId(long cenOwnerId);
	std::string getVerifyCode() const;
	void setVerifyCode(const std::string &verifyCode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCidrBlock() const;
	void setCidrBlock(const std::string &cidrBlock);

private:
	std::string cenId_;
	long cenOwnerId_;
	std::string verifyCode_;
	std::string regionId_;
	std::string cidrBlock_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_VERIFYCENREQUEST_H_
