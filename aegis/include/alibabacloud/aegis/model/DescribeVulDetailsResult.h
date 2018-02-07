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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULDETAILSRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULDETAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeVulDetailsResult : public ServiceResult
			{
			public:


				DescribeVulDetailsResult();
				explicit DescribeVulDetailsResult(const std::string &payload);
				~DescribeVulDetailsResult();
				int getPendingCount()const;
				std::string getDescription()const;
				std::vector<std::string> getCveLists()const;
				std::string getCveIds()const;
				long getVulPublishTs()const;
				std::string getProduct()const;
				bool getHasPatch()const;
				std::string getName()const;
				std::string getType()const;
				std::string getCvss()const;
				long getPatchPublishTs()const;
				int getHandledCount()const;
				std::string getAliasName()const;
				std::string getLevel()const;
				std::string getAdvice()const;
				std::string getPatchSource()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pendingCount_;
				std::string description_;
				std::vector<std::string> cveLists_;
				std::string cveIds_;
				long vulPublishTs_;
				std::string product_;
				bool hasPatch_;
				std::string name_;
				std::string type_;
				std::string cvss_;
				long patchPublishTs_;
				int handledCount_;
				std::string aliasName_;
				std::string level_;
				std::string advice_;
				std::string patchSource_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULDETAILSRESULT_H_