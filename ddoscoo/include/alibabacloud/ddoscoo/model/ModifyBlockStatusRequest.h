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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_MODIFYBLOCKSTATUSREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_MODIFYBLOCKSTATUSREQUEST_H_

#include <alibabacloud/ddoscoo/DdoscooExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddoscoo {
namespace Model {
class ALIBABACLOUD_DDOSCOO_EXPORT ModifyBlockStatusRequest : public RpcServiceRequest {
public:
	ModifyBlockStatusRequest();
	~ModifyBlockStatusRequest();
	int getDuration() const;
	void setDuration(int duration);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<std::string> getLines() const;
	void setLines(const std::vector<std::string> &lines);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	int duration_;
	std::string sourceIp_;
	std::string lang_;
	std::vector<std::string> lines_;
	std::string instanceId_;
	std::string status_;
};
} // namespace Model
} // namespace Ddoscoo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_MODIFYBLOCKSTATUSREQUEST_H_
