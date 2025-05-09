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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_EXECUTEDATACORRECTREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_EXECUTEDATACORRECTREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ExecuteDataCorrectRequest : public RpcServiceRequest {
public:
	ExecuteDataCorrectRequest();
	~ExecuteDataCorrectRequest();
	std::string getTid() const;
	void setTid(const std::string &tid);
	std::map<std::string, std::string> getActionDetail() const;
	void setActionDetail(std::map<std::string, std::string> actionDetail);
	long getOrderId() const;
	void setOrderId(long orderId);
	std::string getActionName() const;
	void setActionName(const std::string &actionName);
	std::string getRealLoginUserUid() const;
	void setRealLoginUserUid(const std::string &realLoginUserUid);

private:
	std::string tid_;
	std::map<std::string, std::string> actionDetail_;
	long orderId_;
	std::string actionName_;
	std::string realLoginUserUid_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_EXECUTEDATACORRECTREQUEST_H_
