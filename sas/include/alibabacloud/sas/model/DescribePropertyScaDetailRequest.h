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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYSCADETAILREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYSCADETAILREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribePropertyScaDetailRequest : public RpcServiceRequest {
public:
	DescribePropertyScaDetailRequest();
	~DescribePropertyScaDetailRequest();
	std::string getSearchItemSub() const;
	void setSearchItemSub(const std::string &searchItemSub);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getPid() const;
	void setPid(const std::string &pid);
	std::string getSearchItem() const;
	void setSearchItem(const std::string &searchItem);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getBiz() const;
	void setBiz(const std::string &biz);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getProcessStartedStart() const;
	void setProcessStartedStart(long processStartedStart);
	long getProcessStartedEnd() const;
	void setProcessStartedEnd(long processStartedEnd);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getScaVersion() const;
	void setScaVersion(const std::string &scaVersion);
	std::string getSearchInfoSub() const;
	void setSearchInfoSub(const std::string &searchInfoSub);
	std::string getSearchInfo() const;
	void setSearchInfo(const std::string &searchInfo);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);
	std::string getPort() const;
	void setPort(const std::string &port);
	long getName() const;
	void setName(long name);
	std::string getScaName() const;
	void setScaName(const std::string &scaName);
	std::string getScaNamePattern() const;
	void setScaNamePattern(const std::string &scaNamePattern);
	std::string getUser() const;
	void setUser(const std::string &user);

private:
	std::string searchItemSub_;
	std::string remark_;
	std::string pid_;
	std::string searchItem_;
	std::string uuid_;
	std::string biz_;
	std::string sourceIp_;
	int pageSize_;
	long processStartedStart_;
	long processStartedEnd_;
	std::string lang_;
	std::string scaVersion_;
	std::string searchInfoSub_;
	std::string searchInfo_;
	int currentPage_;
	std::string bizType_;
	std::string port_;
	long name_;
	std::string scaName_;
	std::string scaNamePattern_;
	std::string user_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYSCADETAILREQUEST_H_
