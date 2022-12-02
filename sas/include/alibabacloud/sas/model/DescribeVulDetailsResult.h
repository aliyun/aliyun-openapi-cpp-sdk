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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEVULDETAILSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEVULDETAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeVulDetailsResult : public ServiceResult
			{
			public:
				struct Cve
				{
					struct Classify
					{
						std::string demoVideoUrl;
						std::string description;
						std::string classify;
					};
					std::string cvssVector;
					std::string cvssScore;
					std::string classify;
					long pocDisclosureTime;
					std::string product;
					std::string cveId;
					std::string otherId;
					std::string targetName;
					std::string intranetIp;
					std::string complexity;
					std::string internetIp;
					std::string solution;
					std::string vulLevel;
					std::string poc;
					std::string reference;
					std::vector<Cve::Classify> classifys;
					std::string title;
					std::string vendor;
					std::string cnvdId;
					std::string targetId;
					std::string instanceName;
					long pocCreateTime;
					long releaseTime;
					std::string content;
					std::string summary;
				};


				DescribeVulDetailsResult();
				explicit DescribeVulDetailsResult(const std::string &payload);
				~DescribeVulDetailsResult();
				std::vector<Cve> getCves()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Cve> cves_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVULDETAILSRESULT_H_