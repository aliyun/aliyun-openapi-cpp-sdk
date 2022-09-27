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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEJOBREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEJOBREQUEST_H_

#include <alibabacloud/schedulerx2/Schedulerx2Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Schedulerx2 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX2_EXPORT CreateJobRequest : public RpcServiceRequest {
public:
	struct ContactInfo {
		std::string ding;
		std::string userPhone;
		std::string userMail;
		std::string userName;
	};
	CreateJobRequest();
	~CreateJobRequest();
	int getAttemptInterval() const;
	void setAttemptInterval(int attemptInterval);
	int getConsumerSize() const;
	void setConsumerSize(int consumerSize);
	std::string getJarUrl() const;
	void setJarUrl(const std::string &jarUrl);
	int getDataOffset() const;
	void setDataOffset(int dataOffset);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	int getTaskMaxAttempt() const;
	void setTaskMaxAttempt(int taskMaxAttempt);
	int getDispatcherSize() const;
	void setDispatcherSize(int dispatcherSize);
	std::string getJobType() const;
	void setJobType(const std::string &jobType);
	int getTaskAttemptInterval() const;
	void setTaskAttemptInterval(int taskAttemptInterval);
	std::string getExecuteMode() const;
	void setExecuteMode(const std::string &executeMode);
	std::string getTimeExpression() const;
	void setTimeExpression(const std::string &timeExpression);
	bool getTimeoutEnable() const;
	void setTimeoutEnable(bool timeoutEnable);
	std::vector<ContactInfo> getContactInfo() const;
	void setContactInfo(const std::vector<ContactInfo> &contactInfo);
	std::string getName() const;
	void setName(const std::string &name);
	int getTimeType() const;
	void setTimeType(int timeType);
	std::string getParameters() const;
	void setParameters(const std::string &parameters);
	int getStatus() const;
	void setStatus(int status);
	std::string getNamespaceSource() const;
	void setNamespaceSource(const std::string &namespaceSource);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getContent() const;
	void setContent(const std::string &content);
	long getTimeout() const;
	void setTimeout(long timeout);
	bool getTimeoutKillEnable() const;
	void setTimeoutKillEnable(bool timeoutKillEnable);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getCalendar() const;
	void setCalendar(const std::string &calendar);
	bool getFailEnable() const;
	void setFailEnable(bool failEnable);
	std::string getSendChannel() const;
	void setSendChannel(const std::string &sendChannel);
	int getMaxAttempt() const;
	void setMaxAttempt(int maxAttempt);
	bool getMissWorkerEnable() const;
	void setMissWorkerEnable(bool missWorkerEnable);
	int getQueueSize() const;
	void setQueueSize(int queueSize);
	std::string getClassName() const;
	void setClassName(const std::string &className);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getXAttrs() const;
	void setXAttrs(const std::string &xAttrs);
	int getMaxConcurrency() const;
	void setMaxConcurrency(int maxConcurrency);

private:
	int attemptInterval_;
	int consumerSize_;
	std::string jarUrl_;
	int dataOffset_;
	std::string groupId_;
	int taskMaxAttempt_;
	int dispatcherSize_;
	std::string jobType_;
	int taskAttemptInterval_;
	std::string executeMode_;
	std::string timeExpression_;
	bool timeoutEnable_;
	std::vector<ContactInfo> contactInfo_;
	std::string name_;
	int timeType_;
	std::string parameters_;
	int status_;
	std::string namespaceSource_;
	std::string description_;
	std::string content_;
	long timeout_;
	bool timeoutKillEnable_;
	std::string regionId_;
	int pageSize_;
	std::string calendar_;
	bool failEnable_;
	std::string sendChannel_;
	int maxAttempt_;
	bool missWorkerEnable_;
	int queueSize_;
	std::string className_;
	std::string _namespace_;
	std::string xAttrs_;
	int maxConcurrency_;
};
} // namespace Model
} // namespace Schedulerx2
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEJOBREQUEST_H_
