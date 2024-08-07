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

#ifndef ALIBABACLOUD_NIS_MODEL_GETNATTOPNREQUEST_H_
#define ALIBABACLOUD_NIS_MODEL_GETNATTOPNREQUEST_H_

#include <alibabacloud/nis/NisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nis {
namespace Model {
class ALIBABACLOUD_NIS_EXPORT GetNatTopNRequest : public RpcServiceRequest {
public:
	GetNatTopNRequest();
	~GetNatTopNRequest();
	std::string getIp() const;
	void setIp(const std::string &ip);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	int getTopN() const;
	void setTopN(int topN);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);

private:
	std::string ip_;
	long endTime_;
	std::string orderBy_;
	long beginTime_;
	int topN_;
	std::string regionId_;
	std::string natGatewayId_;
};
} // namespace Model
} // namespace Nis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NIS_MODEL_GETNATTOPNREQUEST_H_
