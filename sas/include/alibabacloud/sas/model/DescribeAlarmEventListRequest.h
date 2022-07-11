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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEALARMEVENTLISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEALARMEVENTLISTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeAlarmEventListRequest : public RpcServiceRequest {
public:
	DescribeAlarmEventListRequest();
	~DescribeAlarmEventListRequest();
	std::string getTimeEnd() const;
	void setTimeEnd(const std::string &timeEnd);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getAlarmEventType() const;
	void setAlarmEventType(const std::string &alarmEventType);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getAlarmEventName() const;
	void setAlarmEventName(const std::string &alarmEventName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	long getId() const;
	void setId(long id);
	std::string getTacticId() const;
	void setTacticId(const std::string &tacticId);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getUniqueInfo() const;
	void setUniqueInfo(const std::string &uniqueInfo);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getOperateTimeEnd() const;
	void setOperateTimeEnd(const std::string &operateTimeEnd);
	std::vector<std::string> getOperateErrorCodeList() const;
	void setOperateErrorCodeList(const std::vector<std::string> &operateErrorCodeList);
	std::string getOperateTimeStart() const;
	void setOperateTimeStart(const std::string &operateTimeStart);
	std::string getTimeStart() const;
	void setTimeStart(const std::string &timeStart);
	std::string getLevels() const;
	void setLevels(const std::string &levels);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);

private:
	std::string timeEnd_;
	std::string targetType_;
	std::string alarmEventType_;
	std::string remark_;
	std::string containerFieldName_;
	std::string alarmEventName_;
	std::string sourceIp_;
	std::string containerFieldValue_;
	std::string pageSize_;
	std::string from_;
	long id_;
	std::string tacticId_;
	std::string lang_;
	std::string uniqueInfo_;
	std::string groupId_;
	std::string dealed_;
	int currentPage_;
	std::string clusterId_;
	std::string operateTimeEnd_;
	std::vector<std::string> operateErrorCodeList_;
	std::string operateTimeStart_;
	std::string timeStart_;
	std::string levels_;
	std::string uuids_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEALARMEVENTLISTREQUEST_H_
