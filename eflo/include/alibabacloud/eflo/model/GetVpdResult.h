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

#ifndef ALIBABACLOUD_EFLO_MODEL_GETVPDRESULT_H_
#define ALIBABACLOUD_EFLO_MODEL_GETVPDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eflo/EfloExport.h>

namespace AlibabaCloud
{
	namespace Eflo
	{
		namespace Model
		{
			class ALIBABACLOUD_EFLO_EXPORT GetVpdResult : public ServiceResult
			{
			public:
				struct Content
				{
					struct ErInfo
					{
						std::string status;
						long connections;
						std::string erName;
						std::string tenantId;
						std::string description;
						std::string message;
						std::string createTime;
						std::string gmtModified;
						std::string erId;
						std::string regionId;
						long routeMaps;
						std::string masterZoneId;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					int ncCount;
					long privateIpCount;
					std::string message;
					int networkInterfaceCount;
					long subnetCount;
					std::string resourceGroupId;
					std::vector<std::string> secondaryCidrBlocks;
					std::string createTime;
					std::string gmtModified;
					std::string vpdName;
					std::string tenantId;
					std::string cidr;
					int quota;
					std::string vpdId;
					std::vector<ErInfo> erInfos;
					bool attachErStatus;
					std::string serviceCidr;
					std::string regionId;
					std::vector<Tag> tags;
				};


				GetVpdResult();
				explicit GetVpdResult(const std::string &payload);
				~GetVpdResult();
				std::string getMessage()const;
				Content getContent()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Content content_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_MODEL_GETVPDRESULT_H_