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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERS2REQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERS2REQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListClusters2Request : public RpcServiceRequest
			{

			public:
				ListClusters2Request();
				~ListClusters2Request();

				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				Array getIaasTypes()const;
				void setIaasTypes(const Array& iaasTypes);
				Array getClusterIds()const;
				void setClusterIds(const Array& clusterIds);
				Array getTags()const;
				void setTags(const Array& tags);
				Array getClusterStates()const;
				void setClusterStates(const Array& clusterStates);
				Array getPaymentTypes()const;
				void setPaymentTypes(const Array& paymentTypes);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);
				Array getClusterTypes()const;
				void setClusterTypes(const Array& clusterTypes);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				Array getPaymentStatuses()const;
				void setPaymentStatuses(const Array& paymentStatuses);

            private:
				std::string clusterName_;
				std::string resourceGroupId_;
				Array iaasTypes_;
				Array clusterIds_;
				Array tags_;
				Array clusterStates_;
				Array paymentTypes_;
				int maxResults_;
				std::string systemDebug_;
				Array clusterTypes_;
				std::string clientToken_;
				std::string nextToken_;
				std::string regionId_;
				Array paymentStatuses_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERS2REQUEST_H_