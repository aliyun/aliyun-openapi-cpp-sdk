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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEPRICEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEPRICEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribePriceRequest : public RpcServiceRequest {
public:
	struct DataDisks {
		long size;
		std::string category;
	};
	DescribePriceRequest();
	~DescribePriceRequest();
	std::vector<DataDisks> getDataDisks() const;
	void setDataDisks(const std::vector<DataDisks> &dataDisks);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	int getDataDisk1Size() const;
	void setDataDisk1Size(int dataDisk1Size);
	int getQuantity() const;
	void setQuantity(int quantity);
	int getSystemDiskSize() const;
	void setSystemDiskSize(int systemDiskSize);

private:
	std::vector<DataDisks> dataDisks_;
	std::string ensRegionId_;
	int period_;
	std::string periodUnit_;
	std::string internetChargeType_;
	std::string instanceType_;
	int dataDisk1Size_;
	int quantity_;
	int systemDiskSize_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEPRICEREQUEST_H_
