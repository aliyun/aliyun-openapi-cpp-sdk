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

#ifndef ALIBABACLOUD_VPC_MODEL_GETVPNGATEWAYDIAGNOSERESULTRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_GETVPNGATEWAYDIAGNOSERESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT GetVpnGatewayDiagnoseResultResult : public ServiceResult
			{
			public:
				struct DiagnoseResultItem
				{
					std::string diagnoseResultLevel;
					std::string diagnoseResultDescription;
					std::string diagnoseName;
				};


				GetVpnGatewayDiagnoseResultResult();
				explicit GetVpnGatewayDiagnoseResultResult(const std::string &payload);
				~GetVpnGatewayDiagnoseResultResult();
				int getTotalCount()const;
				std::string getFinishTime()const;
				std::string getVpnGatewayId()const;
				int getFinishedCount()const;
				std::string getDiagnoseId()const;
				std::string getBeginTime()const;
				std::string getResourceType()const;
				std::vector<DiagnoseResultItem> getDiagnoseResult()const;
				std::string getResourceInstanceId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string finishTime_;
				std::string vpnGatewayId_;
				int finishedCount_;
				std::string diagnoseId_;
				std::string beginTime_;
				std::string resourceType_;
				std::vector<DiagnoseResultItem> diagnoseResult_;
				std::string resourceInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_GETVPNGATEWAYDIAGNOSERESULTRESULT_H_