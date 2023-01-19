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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEUNIRESTOREPLANREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEUNIRESTOREPLANREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT CreateUniRestorePlanRequest : public RpcServiceRequest {
public:
	CreateUniRestorePlanRequest();
	~CreateUniRestorePlanRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getInstanceUuid() const;
	void setInstanceUuid(const std::string &instanceUuid);
	std::string getRestoreInfo() const;
	void setRestoreInfo(const std::string &restoreInfo);
	std::string getDatabase() const;
	void setDatabase(const std::string &database);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getPolicyId() const;
	void setPolicyId(long policyId);
	std::string getResetScn() const;
	void setResetScn(const std::string &resetScn);
	std::string getResetTime() const;
	void setResetTime(const std::string &resetTime);
	long getTimePoint() const;
	void setTimePoint(long timePoint);

private:
	long resourceOwnerId_;
	std::string instanceUuid_;
	std::string restoreInfo_;
	std::string database_;
	std::string sourceIp_;
	long policyId_;
	std::string resetScn_;
	std::string resetTime_;
	long timePoint_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEUNIRESTOREPLANREQUEST_H_
