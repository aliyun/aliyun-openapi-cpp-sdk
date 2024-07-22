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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEREQUEST_H_

#include <alibabacloud/elasticsearch/ElasticsearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Elasticsearch {
namespace Model {
class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListInstanceRequest : public RoaServiceRequest {
public:
	ListInstanceRequest();
	~ListInstanceRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getInstanceCategory() const;
	void setInstanceCategory(const std::string &instanceCategory);
	std::string getInnerapiOwnerId() const;
	void setInnerapiOwnerId(const std::string &innerapiOwnerId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getSize() const;
	void setSize(int size);
	std::string getEsVersion() const;
	void setEsVersion(const std::string &esVersion);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getPage() const;
	void setPage(int page);
	std::string getPaymentType() const;
	void setPaymentType(const std::string &paymentType);

private:
	std::string description_;
	std::string instanceCategory_;
	std::string innerapiOwnerId_;
	std::string tags_;
	std::string productType_;
	std::string resourceGroupId_;
	std::string instanceId_;
	int size_;
	std::string esVersion_;
	std::string vpcId_;
	std::string zoneId_;
	int page_;
	std::string paymentType_;
};
} // namespace Model
} // namespace Elasticsearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEREQUEST_H_
