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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_OPERATEDESIGNATEEXECUTORSREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_OPERATEDESIGNATEEXECUTORSREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT OperateDesignateExecutorsRequest : public RpcServiceRequest {
public:
	OperateDesignateExecutorsRequest();
	~OperateDesignateExecutorsRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	bool getTransferable() const;
	void setTransferable(bool transferable);
	int getDesignateType() const;
	void setDesignateType(int designateType);
	long getJobId() const;
	void setJobId(long jobId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::vector<std::string> getAddressList() const;
	void setAddressList(const std::vector<std::string> &addressList);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);

private:
	std::string mseSessionId_;
	bool transferable_;
	int designateType_;
	long jobId_;
	std::string appName_;
	std::vector<std::string> addressList_;
	std::string clusterId_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_OPERATEDESIGNATEEXECUTORSREQUEST_H_
