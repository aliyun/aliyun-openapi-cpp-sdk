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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEGRAPH4INVESTIGATIONONLINEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEGRAPH4INVESTIGATIONONLINEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeGraph4InvestigationOnlineRequest : public RpcServiceRequest
			{

			public:
				DescribeGraph4InvestigationOnlineRequest();
				~DescribeGraph4InvestigationOnlineRequest();

				std::string getVertexId()const;
				void setVertexId(const std::string& vertexId);
				std::string getAnomalyId()const;
				void setAnomalyId(const std::string& anomalyId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getAnomalyUuid()const;
				void setAnomalyUuid(const std::string& anomalyUuid);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getDirection()const;
				void setDirection(const std::string& direction);
				int getPathLength()const;
				void setPathLength(int pathLength);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);

            private:
				std::string vertexId_;
				std::string anomalyId_;
				std::string sourceIp_;
				std::string anomalyUuid_;
				std::string lang_;
				std::string direction_;
				int pathLength_;
				std::string _namespace_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEGRAPH4INVESTIGATIONONLINEREQUEST_H_