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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SETWORKFLOWEXTRAINFOREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SETWORKFLOWEXTRAINFOREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT SetWorkflowExtraInfoRequest : public RpcServiceRequest {
public:
	SetWorkflowExtraInfoRequest();
	~SetWorkflowExtraInfoRequest();
	std::string getThirdpartyWorkflowComment() const;
	void setThirdpartyWorkflowComment(const std::string &thirdpartyWorkflowComment);
	bool getRenderAgree() const;
	void setRenderAgree(bool renderAgree);
	long getTid() const;
	void setTid(long tid);
	long getWorkflowInstanceId() const;
	void setWorkflowInstanceId(long workflowInstanceId);
	bool getRenderCancel() const;
	void setRenderCancel(bool renderCancel);
	bool getRenderAddApprovalNode() const;
	void setRenderAddApprovalNode(bool renderAddApprovalNode);
	bool getRenderTransfer() const;
	void setRenderTransfer(bool renderTransfer);
	bool getRenderReject() const;
	void setRenderReject(bool renderReject);
	std::string getThirdpartyWorkflowUrl() const;
	void setThirdpartyWorkflowUrl(const std::string &thirdpartyWorkflowUrl);

private:
	std::string thirdpartyWorkflowComment_;
	bool renderAgree_;
	long tid_;
	long workflowInstanceId_;
	bool renderCancel_;
	bool renderAddApprovalNode_;
	bool renderTransfer_;
	bool renderReject_;
	std::string thirdpartyWorkflowUrl_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SETWORKFLOWEXTRAINFOREQUEST_H_
