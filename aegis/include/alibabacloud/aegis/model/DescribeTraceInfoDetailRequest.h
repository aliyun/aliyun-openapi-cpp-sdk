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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFODETAILREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFODETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeTraceInfoDetailRequest : public RpcServiceRequest
			{

			public:
				DescribeTraceInfoDetailRequest();
				~DescribeTraceInfoDetailRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getVertexId()const;
				void setVertexId(const std::string& vertexId);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getUuid()const;
				void setUuid(const std::string& uuid);
				long getIncidentTime()const;
				void setIncidentTime(long incidentTime);

            private:
				std::string sourceIp_;
				std::string vertexId_;
				std::string from_;
				std::string lang_;
				std::string type_;
				std::string uuid_;
				long incidentTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBETRACEINFODETAILREQUEST_H_