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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGRUNHISTORYREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGRUNHISTORYREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeDataMaskingRunHistoryRequest : public RpcServiceRequest {
public:
	DescribeDataMaskingRunHistoryRequest();
	~DescribeDataMaskingRunHistoryRequest();
	int getSrcType() const;
	void setSrcType(int srcType);
	long getMainProcessId() const;
	void setMainProcessId(long mainProcessId);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getSrcTableName() const;
	void setSrcTableName(const std::string &srcTableName);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	int getDstType() const;
	void setDstType(int dstType);
	int getStatus() const;
	void setStatus(int status);

private:
	int srcType_;
	long mainProcessId_;
	long startTime_;
	std::string sourceIp_;
	int pageSize_;
	std::string lang_;
	std::string taskId_;
	std::string srcTableName_;
	int featureType_;
	long endTime_;
	int currentPage_;
	int dstType_;
	int status_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGRUNHISTORYREQUEST_H_
