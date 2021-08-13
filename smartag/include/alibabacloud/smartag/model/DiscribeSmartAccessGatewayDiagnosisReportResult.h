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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DISCRIBESMARTACCESSGATEWAYDIAGNOSISREPORTRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DISCRIBESMARTACCESSGATEWAYDIAGNOSISREPORTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DiscribeSmartAccessGatewayDiagnosisReportResult : public ServiceResult
			{
			public:
				struct DiagnoseResult
				{
					struct Level
					{
						std::string biz;
						std::string configuration;
						std::string total;
					};
					struct Statistics
					{
						int warning;
						int total;
						int error;
						int info;
					};
					struct Detail
					{
						struct Statistics1
						{
							int warning;
							int total;
							int error;
							int info;
						};
						struct Item
						{
							struct CN
							{
								std::string itemLevel;
								std::string itemType;
								std::string itemName;
								std::vector<std::string> advice;
								std::vector<std::string> details2;
							};
							struct EN
							{
								std::string itemLevel;
								std::vector<std::string> advice3;
								std::string itemType;
								std::string itemName;
								std::vector<std::string> details4;
							};
							std::string type;
							long endTime;
							long startTime;
							EN eN;
							std::string itemName;
							std::string level;
							CN cN;
						};
						std::string type;
						std::vector<Detail::Item> items;
						Statistics1 statistics1;
					};
					std::string parameters;
					int endTime;
					int percent;
					std::string userLevel;
					std::string instanceId;
					int finishedNumber;
					int startTime;
					Statistics statistics;
					std::string boxType;
					std::string monitorVersion;
					std::string storeType;
					std::string uId;
					std::vector<Detail> details;
					int reportSLSSuccess;
					std::string state;
					std::string diagnoseId;
					int totalNumber;
					Level level;
					std::string sN;
					std::string boxVersion;
				};


				DiscribeSmartAccessGatewayDiagnosisReportResult();
				explicit DiscribeSmartAccessGatewayDiagnosisReportResult(const std::string &payload);
				~DiscribeSmartAccessGatewayDiagnosisReportResult();
				DiagnoseResult getDiagnoseResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				DiagnoseResult diagnoseResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DISCRIBESMARTACCESSGATEWAYDIAGNOSISREPORTRESULT_H_