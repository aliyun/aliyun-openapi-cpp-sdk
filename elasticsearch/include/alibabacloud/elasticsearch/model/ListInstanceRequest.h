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
	string getDescription() const;
	void setDescription(string description);
	string getInstanceCategory() const;
	void setInstanceCategory(string instanceCategory);
	string getInnerapiOwnerId() const;
	void setInnerapiOwnerId(string innerapiOwnerId);
	string getTags() const;
	void setTags(string tags);
	string getProductType() const;
	void setProductType(string productType);
	string getResourceGroupId() const;
	void setResourceGroupId(string resourceGroupId);
	string getInstanceId() const;
	void setInstanceId(string instanceId);
	integer getSize() const;
	void setSize(integer size);
	string getEsVersion() const;
	void setEsVersion(string esVersion);
	string getVpcId() const;
	void setVpcId(string vpcId);
	string getZoneId() const;
	void setZoneId(string zoneId);
	integer getPage() const;
	void setPage(integer page);
	string getPaymentType() const;
	void setPaymentType(string paymentType);

private:
	string description_;
	string instanceCategory_;
	string innerapiOwnerId_;
	string tags_;
	string productType_;
	string resourceGroupId_;
	string instanceId_;
	integer size_;
	string esVersion_;
	string vpcId_;
	string zoneId_;
	integer page_;
	string paymentType_;
};
} // namespace Model
} // namespace Elasticsearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEREQUEST_H_
